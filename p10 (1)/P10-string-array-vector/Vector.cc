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

#include "Vector.h"

Vector::Vector(const int& size, const double& lower, const double& upper) {
  size_ = size;
  lower_ = lower;
  upper_ = upper;
}

// FASE I
std::vector<double> Vector::GenerateVector() {
  std::vector<double> vector {};
  vector.reserve(this->get_size());
  std::default_random_engine generator;
  std::uniform_real_distribution<double> distribution(this->get_lower(),this->get_upper());
  for (int i = 0; i < this->get_size(); i++) {
    vector.push_back(distribution(generator));
  }
  std::shuffle(vector.begin(), vector.end(), generator); // Shuffle the vector
  return vector;
}  

void ReadVector(const std::vector<double>& vector) {
  std::cout << "{ ";
  for (const auto& value : vector) {
    std::cout << value << " ";
  }
  std::cout << "}\n";
}

void SortVector(const std::vector<double>& vector) {
  std::vector<double> sorted_vector = vector;
  std::sort(sorted_vector.begin(), sorted_vector.end());
  ReadVector(sorted_vector);
}

void UniqueVector(const std::vector<double>& vector) {
  std::vector<double> unique_vector = vector;
  std::sort(unique_vector.begin(), unique_vector.end());
  unique_vector.erase(std::unique(unique_vector.begin(), unique_vector.end()), unique_vector.end());
  ReadVector(unique_vector);
}

// FASE II
void SumVector(const std::vector<double>& vector) {
  double result {0.0}; 
  for(size_t i {0}; i < vector.size(); ++i) {
    result += vector.at(i);
  } 
  std::cout << result << std::endl;
}

// FASE III
void MaximunValue(const std::vector<double>& vector) {
  std::vector<double> sorted_vector = vector;
  std::sort(sorted_vector.begin(), sorted_vector.end());
  std::cout << sorted_vector.back() << std::endl;
}

void MinimunValue(const std::vector<double>& vector) {
  std::vector<double> sorted_vector = vector;
  std::sort(sorted_vector.begin(), sorted_vector.end());
  std::cout << sorted_vector.front() << std::endl;
}

void AverageValue(const std::vector<double>& vector) {
  double sum = std::accumulate(vector.begin(), vector.end(), 0.0);
  double average = sum / vector.size();
  std::cout << average << std::endl;
}

void MMAVector(std::vector<double>& vector) {
  std::vector<double> sorted_vector = vector;
  std::sort(sorted_vector.begin(), sorted_vector.end());
  std::cout << "El valor maximo del vector es: " << sorted_vector.back() << std::endl;
  std::cout << "El valor minimo del vector es: " << sorted_vector.front() << std::endl;
  double sum = std::accumulate(vector.begin(), vector.end(), 0.0);
  double average = sum / vector.size();
  std::cout << "El valor medio del vector es: " << average << std::endl;
}

// FASE IV
std::vector<double> ConcatenateVectors(const std::vector<double>& vector1, const std::vector<double>& vector2) {
  std::vector<double> vector3 {};
  vector3.reserve(vector1.size() + vector2.size());
  vector3.insert(vector3.end(), vector1.begin(), vector1.end());
  vector3.insert(vector3.end(), vector2.begin(), vector2.end());
  return vector3;
}

void Vector::PropertiesVector(const std::vector<double>& vector) {
  this->set_size(vector.size());
  this->set_lower(vector.front());
  this->set_upper(vector.back());  
}

// E/R
void Vector::EnterLowerUpperSize(std::istream& is){
  std::cout << "Introduzca el tamaño del vector: ";
  is >> size_;
  std::cout << "Introduzca el limite inferior: ";
  is >> lower_;
  std::cout << "Introduzca el limite superior: ";
  is >> upper_;
}

void Vector::ReadLowerUpperSize(std::ostream& os){
  os << "El tamaño del vector es: " << this->get_size() << std::endl;
  os << "El limite inferior es: " << this->get_lower() << std::endl;
  os << "El limite superior es: " << this->get_upper() << std::endl;
}

// std::vector<double> Vector::GenerateVector() {
//   std::vector<double> vector {};
//   resize(this->get_size());
//   reserve(this->get_size());
//   std::default_random_engine generator;
//   std::uniform_real_distribution<double> distribution(this->get_lower(),this->get_upper());
//   for (int i = 0; i < this->get_size(); i++) {
//     vector[i] = distribution(generator);
//   }
//   return vector;
// }  
