
course_type = input(
	"Please enter your course type, a list of all the different types will be listed below.\nDiploma, Extended Diploma\n>>"
)

num_of_modules = input(
	"Please give the number of modules in your course: "
)

module_grades = []
module_weight = []

for i in range(int(num_of_modules)):
	module_grades.append(input(f"Please enter the grade you achieved on module {i}: "))

for i in range(int(num_of_modules)):
	module_weight.append(int(input(f"Please enter weight of module {i}: ")))

qfc_points = 0
for i in range(int(num_of_modules)):
	if module_grades[i].upper() == "P":
		qfc_points += 7 * module_weight[i]
	elif module_grades[i].upper() == "M":
		qfc_points += 8 * module_weight[i]
	elif module_grades[i].upper() == "D":
		qfc_points += 9 * module_weight[i]

grade=""
if course_type.lower() == "diploma":
	if 1060 <= qfc_points:
		grade = "D*D*"
	elif 1030 <= qfc_points:
		grade = "D*D"
	elif 1000 <= qfc_points:
		grade = "DD"
	elif 960 <= qfc_points:
		grade = "DM"
	elif 920 <= qfc_points:
		grade = "MM"
	elif 880 <= qfc_points:
		grade = "MP"
	elif 840 <= qfc_points:
		grade = "PP"

elif course_type.lower() == "extended diploma":
	if 1590 <= qfc_points:
		grade = "D*D*D*"
	elif 1560 <= qfc_points:
		grade = "D*D*D"
	elif 1530 <= qfc_points:
		grade = "D*DD"
	elif 1500 <= qfc_points:
		grade = "DDD"
	elif 1460 <= qfc_points:
		grade = "DDM"
	elif 1420 <= qfc_points:
		grade = "DMM"
	elif 1380 <= qfc_points:
		grade = "MMM"
	elif 1340 <= qfc_points:
		grade = "MMP"
	elif 1300 <= qfc_points:
		grade = "MPP"
	elif 1260 <= qfc_points:
		grade = "PPP"

print(f"You have achieved a total of {qcf_points} QCF points and got a {grade}!")


