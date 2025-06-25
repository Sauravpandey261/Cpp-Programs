students = []   # create an empty list to store student names
num_of_students = int(input("Enter the number of students: "))

# take input of student names and store in the list
for i in range(num_of_students):
    student_name = input("Enter the name of student {}: ".format(i+1))
    students.append(student_name)

# create a dictionary to store the attendance status of each student
attendance = {}

# iterate over the list of students and take attendance status input
for student in students:
    status = input("Is {} present? (y/n): ".format(student))
    if status == 'y':
        attendance[student] = True
    else:
        attendance[student] = False

# print the attendance status of each student
print("\nAttendance:")
for student in students:
    if attendance[student]:
        print("{}: Present".format(student))
    else:
        print("{}: Absent".format(student))

