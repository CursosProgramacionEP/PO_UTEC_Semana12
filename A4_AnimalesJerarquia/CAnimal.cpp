#include "CAnimal.h"

using namespace std;

CAnimal::CAnimal() {
    m_Genero       = '-';
    m_RegionVive   = "desconocida";
    m_Nombre       = "sin nombre";
    m_Peso         = 0.0;
    m_CantAlimento = 0;
}

CAnimal::CAnimal(TipoCaracter pGenero, const TipoString& pRegionVive,
                 const TipoString& pNombre, TipoDecimal pPeso, TipoEntero pCantAlimento) {
    m_Genero       = pGenero;
    m_RegionVive   = pRegionVive;
    m_Nombre       = pNombre;
    m_Peso         = pPeso;
    m_CantAlimento = pCantAlimento;
}

CAnimal::~CAnimal() {}

TipoCaracter      CAnimal::getGenero() const       { return m_Genero; }
const TipoString& CAnimal::getRegionVive() const   { return m_RegionVive; }
const TipoString& CAnimal::getNombre() const       { return m_Nombre; }
TipoDecimal       CAnimal::getPeso() const         { return m_Peso; }
TipoEntero        CAnimal::getCantAlimento() const { return m_CantAlimento; }
