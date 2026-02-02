cmake_minimum_required(VERSION 4.1.1)
project(C_programming_K26)

set(CMAKE_CXX_STANDARD 20)

add_executable(C_programming_K26
    "Week_1/Week1_T1.c"
    "Week_1/Week1_T2.c"
    "Week_1/Week1_T3.c"
    "Week_2/Week2_T1.c"
    "Week_2/Week2_T2.c"
    "Week_2/Week2_T3.c"
)
target_include_directories(${PROJECT_NAME} PRIVATE
    Own_headers
 #"C:\\Users\\tuuli\\CLionProjects\\Own_headers"
        "C:/Users/tuuli/CLionProjects/Own_headers"
        "C:/Users/tuuli/CLionProjects/My_C_header"
)
