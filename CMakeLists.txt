cmake_minimum_required(VERSION 3.12)
project(C_programming_K26)

add_subdirectory(My_C_header)

add_executable(${PROJECT_NAME}
        main.c
        Week_1/Week1_T1.c
        Week_1/Week1_T2.c
        Week_1/Week1_T3.c
        Week_2/Week2_T4.c
        Week_2/Week2_T5.c
        Week_2/Week2_T6.c
        Week_3/Week3_T7.c
        Week_3/Week3_T8.c
        Week_3/Week3_T9.c
        Week_4/Week4_T10.c
        Week_4/Week4_T11.c
)

target_link_libraries(${PROJECT_NAME}
    My_C_header
)

#target_include_directories(${PROJECT_NAME} PUBLIC
#        My_C_header
        #"C:\\Users\\tuuli\\CLionProjects\\Own_headers"
        #"C:/Users/tuuli/CLionProjects/Own_headers"
#        "C:/Users/vitun/CLionProjects/C_programming_K26"
#)
