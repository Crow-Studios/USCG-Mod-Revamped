import os
import sys 

cur_dir = os.getcwd()

def generate_classes(file_name):
        directories = os.walk(f"{cur_dir}/{file_name}")
        dirpath, dirnames, filenames = next(directories)
        # clear text file first
        with open("Output.txt",'r+') as output:
            output.truncate(0)

        for filename_sub in os.listdir(f"{cur_dir}/{file_name}"):
            if filename_sub.endswith(".sqf"):
                string =    """
                        class {} 
                        {{
                            file="\\USCG_Common\\functions\{}";
                            postInit=0;
                        }};
                    """.format(filename_sub[3:][:-4], filename_sub)
                print(string)
                with open("Output.txt", "a") as output:
                    output.write("// functions")
                    output.write(string)
                    
        for I in range(2):

            for filename_sub in os.listdir(f"{cur_dir}/{file_name}/{dirnames[I]}"):
                if filename_sub.endswith(".sqf"):
                    dirname = str(dirnames[I]+"\\")
                    stringsubdir = """
                        class {} 
                        {{
                            file="\\USCG_Common\\functions\{}";
                            postInit=0;
                        }};
                    """.format(filename_sub[3:][:-4], str(dirname) + filename_sub)
                    print(stringsubdir)
                    with open("Output.txt", "a") as output:
                        output.write("// " + dirnames[I])
                        output.write(stringsubdir)
        print("end")

generate_classes(sys.argv[1])

# Made by silence and crimzon, really quickly thrown together because it was a tiny python project to learn stuff