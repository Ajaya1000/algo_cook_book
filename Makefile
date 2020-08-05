.PHONY: clean All

All:
	@echo "----------Building project:[ stack_problem - Debug ]----------"
	@cd "stack_problem" && "$(MAKE)" -f  "stack_problem.mk"
clean:
	@echo "----------Cleaning project:[ stack_problem - Debug ]----------"
	@cd "stack_problem" && "$(MAKE)" -f  "stack_problem.mk" clean
