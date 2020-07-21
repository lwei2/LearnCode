#QProgressBar Class 
	进度条控件


#QProgressBar qss
属性
属性	描述
minimum/maximum	设置最小值/最大值
value	设置或读取当前值
textVisible	是否显示文字，文字一般是百分比表示的进度
orientation	设置为垂直方向或水平方向
format	显示文字的格式，“%p%”显示百分比，“%v”显示当前值，“%m”显示总步数。缺省为“%p%”	


QProgressBar 
{
	border:2px solid red;	//外边框 2px表示像素，solid-表示实体,red-表示颜色，可以通过rgb(xxx,xxx,xxx),其中xxx是0~255或者十六进制表示颜色
	border-radius:5px;		//圆角
	text-align:centen;		//字体对齐方式
}

background: qlineargradient(x1:0, y1:0, x2:1, y2:0" 