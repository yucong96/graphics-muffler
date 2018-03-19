1. set {model_name}.txt in ./geo_config
2. run "run_1.sh {model_name}", which can generate {model_name}.geo and open netgen
3. save the {model_name}.vol produced by netgen in ./vol
4. run "run_2.sh {model_name}", which can transfer vol to vtk and copy it to the main program (../tet/{model_name}.vtk)