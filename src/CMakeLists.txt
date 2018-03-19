SET(SRC_LIST main.cpp CoeffItem.cpp CoeffMatrix.cpp ConfigReader.cpp DataFiller.cpp UtilTools.cpp VtkReader.cpp)
ADD_EXECUTABLE(muffler ${SRC_LIST})
TARGET_LINK_LIBRARIES(muffler Eigen3::Eigen)
