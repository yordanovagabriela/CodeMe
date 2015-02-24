def tetrahedron_filled(tetrahedrons, water):
	max_tetrahedrons=0
	tetrahedrons.sort()
	for edges in tetrahedrons:
		volume=((edges**3)*(2**0.5))/12000
		if volume<=water:
			max_tetrahedrons=max_tetrahedrons+1
			water=water-volume
	return (max_tetrahedrons)
print (tetrahedron_filled([40,30,10],10))
