## Stepping Around
#### Step Over
	next
	n
#### Step into
	step
	s
#### Cotinue
	c
---

## Inspecting Variables
#### Print Variable Contents
	p varName
#### Frame Variables
	frame variable
	fr V
#### Current Line
	frame select
---

## Backtrace and Frames
#### Backtrace
	bt
#### Switching Frames
	frame select o
	f 2
---

## Using Watchpoints
Program must be running in order to set the watch point.
#### Global Variable
	watchpoint set variable globalVariable
	watchpoint set variable -W read I write I read_write globalVariable
#### Member Variable
	b main
	W S V d.memberVar
---
![frame_v.png](frame_v.png)

![p_str](p_str.png)

![p_&str](p_%26str.png) 