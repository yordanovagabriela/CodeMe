def fill(my_list,litres):
	i=0
	br=0
	for numbers in my_list:
		
		volume=(my_list[i]*my_list[i]*my_list[i]*(2**0.5))/12000
		if volume<=litres:
			br=br+1
			litres=litres-volume
		i=i+1
	print (br)

list=[100,20,30]
litress=10
print (fill(list,litress))