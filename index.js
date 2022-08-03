const fs = require('fs').promises
const axios = require('axios');
require('dotenv').config()

async function getData(url){

	var config = {
		method: 'get',
		url: url,
		headers: { 
			'Authorization': process.env.SECRET_KEY
		}
	};
	const res = await axios(config)
  // console.log('after the call to service');
	// console.log(res.data.count)
  return (res.data.count);
}

(async()=>{
	const views = await getData('https://api.github.com/repos/nach131/42Barcelona/traffic/views');
	const clone = await getData('https://api.github.com/repos/nach131/42Barcelona/traffic/clones');
	const MarkdownTemplate = await fs.readFile('./README.md.tpl', { encoding: 'utf-8' })

	// console.log(views,clone)
	const newMarkdown = MarkdownTemplate
	.replace('total_views', views)
	.replace('total_clone', clone)
 	// console.log(newMarkdown);
	await fs.writeFile('./README.md', newMarkdown)
})();


