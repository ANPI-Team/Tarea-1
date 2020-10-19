
all:
	@make --no-print-directory clean 
	@make --no-print-directory run-e2
	@make --no-print-directory run-e3

run-e2: 
	@PYTHONIOENCODING=utf-8 python3 prueba_metodo_p2.py

run-e3:
	@python3 aplicacion_p2.py 

.PHONY: clean 
clean: 
	@rm -rf __pycache__
	@clear
