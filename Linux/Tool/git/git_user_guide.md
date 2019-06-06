1.git安装
============

	参见Install_for_git.md

2.常见的git命令
============
	1.git init

	2.显示command的help
		# git help <command>
	3.显示某次提交的内容
		# git show $id
	4.抛弃工作区修改
		# git co --<file>
	5.抛弃工作区修改
		# git co . 
	6.将工作文件修改提交到本地暂存区
		# git add <file>
	7.将所有修改过的工作文件提交暂存区
		# git add .
	8.从版本库中删除文件，但不删除文件
		# git rm <file> --cached
	9.从版本库中删除文件
		# git rm <file>
	10.从暂存区恢复到工作文件
		# git reset <file>
	11.从暂存区恢复到工作文件
		# git reset -- .
	12.恢复最近一次提交过的状态
		# git reset --hard
	13.将之前操作合并
		# git ci <file> | git ci . | git ci -a
	14.修改最后一次提交记录
		# git ci --amend
	15.回复某次提交的状态，恢复动作本身也创建提交对象
		# git revert <$id>
	16.恢复最后一次提交状态
		# git revert HEAD
	17.比较当前文件和暂存区文件差异
		# git diff <file>
	18.比较暂存区和版本库差异
		# git diff -staged
		# git diff --cached
	19.仅仅比较统计信息
		# git diff --stat
	20.查看该文件每次提交记录
		# git log <file>
		# git logg -p <file> //查看每次详细内容的diff
	21.查看提交统计信息
		# git log  --stat

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


