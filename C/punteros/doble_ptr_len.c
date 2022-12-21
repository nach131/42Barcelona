/* ╔════════════════════════════════════════════════════════════════════════╗ */
/* ║                 https://github.com/nach131/42Barcelona                 ║ */
/* ╚════════════════════════════════════════════════════════════════════════╝ */

int main(void)
{
	char **arr;

	arr = (char **)calloc(4, sizeof(arr));
	int i = 0;

	arr[0] = strdup("42 Barcelona");
	arr[1] = strdup("42 Madrid");
	arr[2] = strdup("42 Malaga");
	arr[3] = strdup("42 Paris");

	printf("len arr: %i\n", print_arr(&*arr));

	return (131);
}
