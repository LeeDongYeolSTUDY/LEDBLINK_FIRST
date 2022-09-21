cmake_minimum_required(VERSION 3.0.0)

project(LEDBLINK)

add_executable(${PROJECT_NAME}
    ./HW/BUTTON/BUTTON.cpp
    ./HW/LED/LED.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
    ./HW/BUTTON
    ./HW/LED
)

# wiringPi에 대한 라이브러리를 추가해준다.
target_link_libraries(${PROJECT_NAME} PUBLIC
    -lwiringPi
)

# target은 프로젝트 이름을 말한다. compile했을 때 warning도 다 출력해줘라.
target_compile_options(${PROJECT_NAME} PUBLIC
    -Wall
)

