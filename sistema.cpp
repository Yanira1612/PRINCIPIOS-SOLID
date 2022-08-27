#include <iostream>


class Persona {
 private:
  std::string nombre;
  int edad;
  void metodoPrivado() {
    std::cout << "Solo puedo ser llamado desde dentro de la clase";
  }
 public:
  Persona() {
    std::cout << "Se llama al constructor";
    this->metodoPrivado();
  }
  Persona(std::string nombre, int edad) {
    this->edad = edad;
    this->nombre = nombre;
  }
  int getEdad() { return this->edad; }
  void setEdad(int edad) { this->edad = edad; }
  std::string getNombre() { return this->nombre; }
  void setNombre(std::string nombre) { this->nombre = nombre; }

};

//Principio de responsabilidad única
class PersonaDB{

      void saludar() {
    std::cout << "Hola, me llamo " << this->nombre << " y mi edad es "
              << this->edad << "\n";
  }

  virtual void saludarAmigo(std::string nombre) {
    std::cout << "Hola " << nombre << ", me llamo " << this->nombre
              << " y mi edad es " << this->edad << "\n";
  }

}

//Principio de responsabilidad única
class Estudiante : public Persona {
 public:
  Estudiante(std::string nombre, int edad, std::string escuela)
      : Persona(nombre, edad) {}
};

class EstudianteDB{

    void estudiar() { std::cout << "*estudia*\n"; }
  void saludarAmigo(std::string nombre) override {

    std::cout << "Qué onda " << nombre << ", me llamo " << this->getNombre()
              << " y mi edad es " << this->getEdad() << "\n";
  }
}


//Principio de segregación de interfaz
interface Administrador{  
    void agregar_horario();
}; 

interface Administrado_evento {  
    void agregar_actividades_de_evento();
};


interface Administrador_actividad {  
    void agregar_recursos_para_actividad();
};

