import os
def main():
	i = 5
	if i > 0 and __file__[5] != '.':
		i = i - 1
	elif i == 0:
		return
	conv = '%d'
	filename = 'Sully_%d.py'%(i)
	file = open(filename, 'w')
	file_content = "import os%cdef main():%c%ci = %d%c%cif i > 0 and __file__[5] != '.':%c%c%ci = i - 1%c%celif i == 0:%c%c%creturn%c%cconv = '%s'%c%cfilename = 'Sully_%s.py'%c(i)%c%cfile = open(filename, 'w')%c%cfile_content = %c%s%c%c%cfile.write(file_content%c(10,10,9,i,10,9,10,9,9,10,9,10,9,9,10,9,conv,10,9,conv,37,10,9,10,9,34,file_content,34,10,9,37,10,9,10,9,10,10,9))%c%cfile.close()%c%cos.system('python ' + filename)%cif __name__ == '__main__':%c%cmain()"
	file.write(file_content%(10,10,9,i,10,9,10,9,9,10,9,10,9,9,10,9,conv,10,9,conv,37,10,9,10,9,34,file_content,34,10,9,37,10,9,10,9,10,10,9))
	file.close()
	os.system('python ' + filename)
if __name__ == '__main__':
	main()