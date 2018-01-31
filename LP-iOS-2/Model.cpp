//
//  Model.cpp
//  LP-iOS-2
//
//  Created by Omer Maroof on 31.01.18.
//  Copyright © 2018 LivePerson. All rights reserved.
//

#include "Model.hpp"

Model::Model() {
    message = "Hello C++!";
}

std::string Model::getMessage() {
    return message;
}
