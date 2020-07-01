#QSlider Class 
>   QSlider控件提供了一个垂直或水平滑块（条）。
>   滑块是用于控制有界值的典型小部件。它允许用户沿着水平或垂直凹槽移动滑块手柄，并将手柄的位置转换为合法范围内的整数值。
>   QSlider本身只有很少的功能;大多数功能都在QAbstractSlider中。最有用的函数是setValue()，它可以直接将滑块设置为某个值;triggerAction()模拟单击的效果(对于快捷键很有用);setSingleStep()、setPageStep()设置步骤;和setMinimum()和setMaximum()来定义滚动条的范围。
>   QSlider提供了控制标记的方法。可以使用setTickPosition()来指示标记的位置，使用setTickInterval()来指示需要多少个标记。可以分别使用tickPosition()和tickInterval()函数查询当前设置的滴答位置和间隔。
    QSlider继承了一组全面的信号:
        valueChanged()-当滑块的值发生变化时发出。tracking()确定在用户交互期间是否发出此信号。
        sliderPressed()-当用户开始拖动滑块时发出。

#
        
	QSlider setStyleSheet属性
		QSlider中有四个比较重要的辅助控制器（subcontrol），groove表示槽的部分，handle表示滑块，add-page表示未滑过的槽部分,sub-page表示已滑过的槽部分。在辅助控制器后面可以设置状态，horizontal就是QSS生效的QSlider的状态，注意这里设置的方向一定要和slider对象的方向一致，如果slider是vertical的，QSS设定的是horizontal的



    sliderBar->setStyleSheet("QSlider{background:transparent;border-style:outset;}"
                             "QSlider::groove:horizontal{background:#C0C0C0;border:none;border-radius:4px;height:8px}"
                             "QSlider::handle:horizontal{border-image:url(:/res/mandsk/manDskHandle1.png);border-radius:0px;width:40px;height:40px;margin: -16px -2px -16px -2px;}"
                             "QSlider::sub-page:horizontal{background:#00FF00;border:none;border-radius:4px;}"
                             "QSlider::add-page:horizontal{background:#C0C0C0;border:none;border-radius:4px;}");



sliderBar->setStyleSheet("QSlider{background:transparent;border-style:outset;}"
                             "QSlider::groove:horizontal{background:#C0C0C0;border:none;border-radius:4px;height:8px}"
                             "QSlider::handle:horizontal{border-image:url(:/res/mandsk/manDskHandle2.png);border-radius:0px;width:40px;height:40px;margin: -16px -2px -16px -2px;}"
                             "QSlider::sub-page:horizontal{background:#00FF00;border:none;border-radius:4px;}"
                             "QSlider::add-page:horizontal{background:#C0C0C0;border:none;border-radius:4px;}");


    sliderBar->setStyleSheet("QSlider{background:transparent;border-style:outset;}"
                             "QSlider::groove:horizontal{background:#C0C0C0;border:none;border-radius:4px;height:8px}"
                             "QSlider::handle:horizontal{border-image:url(:/res/mandsk/manDskHandle1.png);border-radius:0px;width:40px;height:40px;margin: -16px -2px -16px -2px;}"
                             "QSlider::sub-page:horizontal{background:#00FF00;border:none;border-radius:4px;}"
                             "QSlider::add-page:horizontal{background:#C0C0C0;border:none;border-radius:4px;}");                             