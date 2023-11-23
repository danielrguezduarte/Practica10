/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 14/11/2023
 * @brief Este programa se encarga de realizar diferentes operaciones con vectores
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#pragma once

#include <iostream>
#include <vector>
#include <random> // std::default_random_engine, std::uniform_real_distribution
#include <numeric> // std::accumulate
#include <algorithm> // std::sort, std::unique, std::shuffle

class Vector {
  public:
  // Constructor
  Vector(const int& size, const double& lower, const double& upper);

  // Getters
  int get_size() const {return size_;}
  double get_lower() const {return lower_;}
  double get_upper() const {return upper_;}

  // Setters
  void set_size(const int& size) {size_ = size;}
  void set_lower(const double& lower) {lower_ = lower;}
  void set_upper(const double& upper) {upper_ = upper;}

  // Methods
  // FASE I
  std::vector<double> GenerateVector();
  void PropertiesVector(const std::vector<double>& vector);

  // E/R
  void EnterLowerUpperSize(std::istream& = std::cin);
  void ReadLowerUpperSize(std::ostream& = std::cout);

  private:
  int size_;
  double lower_;
  double upper_;
};

// FASE I
void ReadVector(const std::vector<double>& vector);
void SortVector(const std::vector<double>& vector);
void UniqueVector(const std::vector<double>& vector);

// FASE II
void SumVector(const std::vector<double>& vector);

// FASE III
void MaximunValue(const std::vector<double>& vector);
void MinimunValue(const std::vector<double>& vector);
void AverageValue(const std::vector<double>& vector);
// Unify the three methods above
void MMAVector(std::vector<double>& vector);

// FASE IV
std::vector<double> ConcatenateVectors(const std::vector<double>& vector1, const std::vector<double>& vector2);

// void EnterLowerUpper(int& lower, int& upper);
// void EnterSize(int& size);
// void ReadLowerUpperSize(const int& lower, const int& upper, const int& size);
// std::vector<double> GenerateVector(const int size, const double lower, const double upper);
// void ReadVector(const std::vector<double>& vector);
// void SortVector(std::vector<double>& vector);
// void ReadSortedVector(const std::vector<double>& vector);
// void UniqueVector(std::vector<double>& vector);
