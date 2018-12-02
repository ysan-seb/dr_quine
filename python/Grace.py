def nothing_1(): pass
def nothing_2(): pass
def quine():
	# comment
	file = open("Grace_kid.py", "w")
	file_content = "def nothing_1(): pass%cdef nothing_2(): pass%cdef quine():%c%c# comment%c%cfile = open(%cGrace_kid.py%c, %cw%c)%c%cfile_content = %c%s%c%c%cfile.write(file_content%c(10,10,10,9,10,9,34,34,34,34,10,9,34,file_content,34,10,9,37,10,10,10,9))%c%cif __name__ == '__main__':%c%cquine()"
	file.write(file_content%(10,10,10,9,10,9,34,34,34,34,10,9,34,file_content,34,10,9,37,10,10,10,9))

if __name__ == '__main__':
	quine()