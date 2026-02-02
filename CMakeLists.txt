cmake_minimum_required(VERSION 3.12)
project(C_programming_K26)

set(CMAKE_CXX_STANDARD 20)

#set(Week_1"Week_1/*.c")
#set(Week_2"Week_2/*.c")

add_executable(C_programming_K26
    #Week_1
    #Week_2
    "Week_1/Week1_T1.c"
    "Week_1/Week1_T2.c"
    "Week_1/Week1_T3.c"
    "Week_2/Week2_T4.c"
    "Week_2/Week2_T5.c"
    "Week_2/Week2_T6.c"
    "C:/Users/tuuli/CLionProjects/My_C_header/My_C_header.c"
        main.c
)
target_include_directories(${PROJECT_NAME} PRIVATE
    Own_headers
 #"C:\\Users\\tuuli\\CLionProjects\\Own_headers"
        #"C:/Users/tuuli/CLionProjects/Own_headers"
        "C:/Users/tuuli/CLionProjects/My_C_header"
)
