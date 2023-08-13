- making a remote:

            git remote add <name> <URL>

- first push:

            git push -u <remote-name> <Local branch>

- "pulling"{

        classic-way{
                //geting changes 
                    git fetch <remote-name>
        
                //getting commmit log of both
            
                    git log <branch-name>

                    git log <otherBranch-name>

                //getting differnce
                
                    git diff <branch-name>
            
                //merging changes
            
                    git merge <remote-name>/<branch-name> 
	},
        easy-way{
                git pull <remote-name>
	}
}

- push:

            `git push <remote name>`
