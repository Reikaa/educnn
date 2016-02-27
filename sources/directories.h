#ifdef _MSC_VER
#pragma once
#endif

#ifndef _DIRECTORIES_H_
#define _DIRECTORIES_H_

const std::string root_directory   = "C:/Users/Tatsuya/Documents/Programs/Cpp/educnn/";
const std::string train_image_file = root_directory +
                                     "data/train-images.idx3-ubyte";
const std::string train_label_file = root_directory +
                                     "data/train-labels.idx1-ubyte";
const std::string test_image_file  = root_directory +
                                     "data/t10k-images.idx3-ubyte";
const std::string test_label_file  = root_directory +
                                     "data/t10k-labels.idx1-ubyte";

#endif  // _DIRECTORIES_H_
