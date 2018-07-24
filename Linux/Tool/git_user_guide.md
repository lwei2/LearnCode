1.git安装
============

	参见Install_for_git.md

2.常见的git命令
============


3.本地创建仓库，并提交代码
============
   1) create repository for github
   2) git clone [url]
   3) cd [url]
   4) git add .
   5) git commit -m "commit file name"
   6) git push -u origin master	


错误总结:
=============
1.提示：
	error: 无法推送一些引用到 'https://github.com/yourname/youname.github.io.git'
	提示：更新被拒绝，因为远程版本库包含您本地尚不存在的提交。这通常是因为另外
	提示：一个版本库已向该引用进行了推送。再次推送前，您可能需要先整合远程变更
	提示：(如'git pull...')
	提示：详见 'git push -- help' 中的 'Note about fast-forwards' 小节。
	处理办法：git push -u origin +master


