# A muffler
algebraic3d
solid chamber0 = cylinder(0, 0, 0; 0, 1, 0; 0.2)
	and plane(0, 0, 0; 0, -1, 0)
	and plane(0, 1, 0; 0, 1, 0);
solid muffer = chamber0 ;
tlo muffer;
