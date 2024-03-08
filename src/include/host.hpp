/*
│* host.hpp
│* Copyright (C) 2022 fireclouu
│*
│* This program is free software: you can redistribute it and/or modify
│* it under the terms of the GNU General Public License as published by
│* the Free Software Foundation, either version 3 of the License, or
│* (at your option) any later version.
│*
│* This program is distributed in the hope that it will be useful,
│* but WITHOUT ANY WARRANTY; without even the implied warranty of
│* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
│* GNU General Public License for more details.
│*
│* You should have received a copy of the GNU General Public License
│* along with this program. If not, see <http://www.gnu.org/licenses/>.
│*/

#ifndef SRC_INCLUDE_HOST_HPP_
#define SRC_INCLUDE_HOST_HPP_

#include <stdint.h>
#include <fstream>
#include <iostream>
#include "gameboy.hpp"

using namespace std;
class Host
{
private:
  bool fileExist(string filePath);
  int fileSize;
  int getFileSize(string filePath);
  void readFileContents(string filePath);
  uint8_t romData[ROM_SIZE];
  string filePath;

public:
  Host(const string filePath);
  bool loadFile(string filePath);
  bool loadFileOnArgument();
  uint8_t *getRomData();
};

#endif // SRC_INCLUDE_HOST_HPP_
