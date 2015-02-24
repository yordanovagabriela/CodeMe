def tetrahedron_filled(tetrahedrons, water):
	i=0
	br=0
	tetrahedrons.sort()
	for edges in tetrahedrons:
		volume=(tetrahedrons[i]*tetrahedrons[i]*tetrahedrons[i]*(2**0.5))/12000
		if volume<=water:
			br=br+1
			water=water-volume
		i=i+1
	return (br)
print (tetrahedron_filled([40,30,10],10))
