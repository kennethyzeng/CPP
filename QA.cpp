#1 can't support Vector{} 
#expected ';' at end of declaration /vector /c++
#Your compiler by default does not support brace initialisation; 

https://stackoverflow.com/questions/27924050/expected-at-end-of-declaration-vector-c

Solution: add -std=c++14 
"cpp": "cd $dir && g++ -std=c++14 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"


#2 how to terminate while(cin>>str)
invliad input or end of file

win: ctrl-Z
mac or linux: ctrl-D  (EOF in linux)


#2 how to terminate while(cin>>i)  //i is integer
invalid input such string or char