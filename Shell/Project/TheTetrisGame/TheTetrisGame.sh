#########################################################################
# File Name: TheTetrisGame.sh
# Author: lwei2
# Mail: lwei2@IT.com
# The Description:Tetris Game
#########################################################################

#!/bin/bash

APP_NAME="${0##*[\\/]}"
APP_VERESION="1.0"

#define color 
cRed=1
cGreen=2
cYellow=3
cBlue=4
cFuchsia=5
cCyan=6
cWhite=7
colorTable=($cRed $cGreen $cYellow $cBlue $cFuchsia $cCyan $cWhite)

#location
iLeft=3
iTop=2
((iTrayLeft = iLeft + 2))
((iTrayTop = iTop + 1))
((iTrayWidth = 10))
((iTrayHeight = 15))

#color set
cBorder=$cGreen
cScore=$cFuchsia
cScoreValue=$cCyan

sigRotate=25
sigLeft=26
sigRight=27
sigDown=28
sigAllDown=29
sigExit=30

box0=(0 0 0 1 1 0 1 1)
box1=(0 2 1 2 2 2 3 2 1 0 1 1 1 2 1 3)
box2=(0 0 0 1 1 1 1 2 0 1 1 0 1 1 2 0)
box3=(0 1 0 2 1 0 1 1 0 0 1 0 1 1 2 1)
























