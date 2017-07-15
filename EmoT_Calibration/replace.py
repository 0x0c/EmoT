#!/usr/bin/python
# coding: UTF-8
 
f = open('./PoseDetector.java')
code = f.read()
tmp = code.split('\n')
del tmp[0:110]
tmp.append(";")
code = "\n".join(tmp)
code = code.replace("public", "public:\n enum Pose {question,vsign,arm,standing,beer,sushi};\n")
code = code.replace("throws Exception", "")
code = code.replace("Double.NaN", "-1")
code = code.replace("null", "0")
code = code.replace("PoseDetector.", "PoseDetector::")
code = code.replace("((Double) ", "")
code = code.replace(").doubleValue()", "")
code = code.replace("i[1]", "i[0]")
code = code.replace("i[2]", "i[1]")
code = code.replace("i[3]", "i[2]")
code = code.replace("i[4]", "i[3]")
code = code.replace("i[5]", "i[4]")
code = code.replace("Object []i", "int i[5]")
code = code.replace("Object[] i", "int i[5]")

file_out = open("./PoseDetector.h", "w")
file_out.write(code)
file_out.close()
f.close()
