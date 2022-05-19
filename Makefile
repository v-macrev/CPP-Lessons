.PHONY: clean All

All:
	@echo "----------Building project:[ Project01 - Debug ]----------"
	@cd "Project01" && "$(MAKE)" -f  "Project01.mk"
clean:
	@echo "----------Cleaning project:[ Project01 - Debug ]----------"
	@cd "Project01" && "$(MAKE)" -f  "Project01.mk" clean
