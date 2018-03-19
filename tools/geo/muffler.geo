# A muffler
algebraic3d
solid chamber0 = cylinder(0, 0, 0; 0, 1, 0; 0.5)
	and plane(0, 0, 0; 0, -1, 0)
	and plane(0, 1, 0; 0, 1, 0);
solid chamber1 = cylinder(0, 1, 0; 0, 4, 0; 1)
	and plane(0, 1, 0; 0, -1, 0)
	and plane(0, 4, 0; 0, 1, 0);
solid chamber2 = cylinder(0, 4, 0; 0, 5.5, 0; 0.4)
	and plane(0, 4, 0; 0, -1, 0)
	and plane(0, 5.5, 0; 0, 1, 0);
solid muffer = chamber0 or chamber1 or chamber2 ;
tlo muffer;
