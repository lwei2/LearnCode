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
	22.查看本地分支
		# git branch
	23.查看远程分支
		# git branch -r
	24.创建本地分支
		# git branch <branch-name>
	25.切换分支
		# git checkout <branch-name>
	26.创建新分支并立即切换到新分支
		# git checkout -b <branch-name>
	27.删除分支
		# git branch -d <branch-name>  // -d 只删除已参与合并的分支，对未合并的分支是无法删除
		# git branch -D <branch-name> // -D 强制删除一个分支
	28.合并分支
		# git merge <branch-name>
	29.创建远程分支
		# git push origin <branch-name>
	30.删除远程分支
		# git push origin:heads/[branch-name]
		# git push origin:[branch-name]
	31.查看版本
		# git tag
	32.创建版本
		# git tag [name]
	33.删除版本
		# git tag -d [name]
	34.查看远程版本
		# git tag -r
	35.创建远程版本(本地版本push到远程)
		# git push origin [name]
	36.删除远程版本
		# git push origin:refs/tags/[name]
	37.合并远程仓库的tag到本地
		# git push origin --tags
	38.上传本地tag到远程仓库
		# git push origin --tags
	39.创建带注释的tag
		# git tag -a [name] -m 'comment'

3.本地创建仓库，并提交代码
============
   1) create repository for github
   2) git clone [url]
   3) cd [url]
   4) git add .
   5) git commit -m "commit file name"
   6) git push -u origin master	

4.远程库同步到本地创建仓库
	1)查看远程库	
		# git remote -v
	2)获取远程库最新代码
		# git fetch origin master
	3)比较本地和远程库的区别
		# git log -p master.. origin/master
	4)同步
		# git merge origin/master

		git pull <远程主机名> <远程分支名>:<本地分支名>
		git pull origin master:brantest
		将远程主机origin的master分支拉取过来，与本地的brantest分支合并。
		表示将远程origin主机的master分支拉取过来和本地的当前分支进行合并。

		上面的pull操作用fetch表示为：

git fetch origin master:brantest

git merge brantest

错误总结:
=============
1.错误提示：
	error: 无法推送一些引用到 'https://github.com/yourname/youname.github.io.git'
	提示：更新被拒绝，因为远程版本库包含您本地尚不存在的提交。这通常是因为另外
	提示：一个版本库已向该引用进行了推送。再次推送前，您可能需要先整合远程变更
	提示：(如'git pull...')
	提示：详见 'git push -- help' 中的 'Note about fast-forwards' 小节。
	处理办法：git push -u origin +master

2.错误提示：
	上传文件过大报错：remote: error: GH001: Large files detected.
	处理办法：
		2.1 重写commit，删除大文件
		# git filter-branch --force --index-filter 'git rm -rf --cached --ignore-unmatch [Large files]' --prune-empty --tag-name-filter cat -- --all
			#git stash	//报错
		2.2 推送修改后的repo			
		# git push origin master --force
		2.3 清理和回收空间
		# rm -rf .git/refs/original/
		# git reflog expire --expire=now --all
		# git gc --prune=now
	以上办法若不能处理，则：
		2.1 # git log
			# git reset xxx（回退之前的好的）
			# git push origin master


#github
192.30.253.113 github.com
192.30.253.113 github.com
192.30.253.118 gist.github.com
192.30.253.119 gist.github.com


windows下路径为：
C:\Windows\System32\drivers\etc\hosts 
Linux下路径：
/etc/hosts

