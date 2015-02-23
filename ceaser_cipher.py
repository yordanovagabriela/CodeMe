alphabet={0:'a',1:'b',2:'c',3:'d',
	4:'e',5:'f',6:'g',7:'h',
	8:'i',9:'j',10:'k',11:'l',
	12:'m',13:'n',14:'o',15:'p',
	16:'q',17:'r',18:'s',19:'t',
	20:'u',21:'v',22:'w',23:'x',
	24:'y',25:'z'	
}

def ceaser(string,n):
    	string.lower()
	new_list=list(string)
	last_list=[]
	for i in new_list:
		for m in alphabet:
			if i.lower()==alphabet[m]:
				while n>25:
					n=n-26
				if m+n>25:
					if i==i.lower():	
						last_list.append(alphabet[n+m-26])
					else:
						last_list.append(alphabet[n+m-26].upper())
				else:
					if i==i.lower():
						last_list.append(alphabet[n+m])
					else:
						last_list.append(alphabet[n+m].upper())
	print ("".join(last_list))
ceaser("aaa",7)
