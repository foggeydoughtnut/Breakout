#pragma once

#include "Component.hpp"

#include <SFML/System/Vector2.hpp>


// --------------------------------------------------------------
//
// Specifies the game world size.
//
// --------------------------------------------------------------
namespace components
{
    class Size : public PolymorphicComparable<Component, Size>
    {
      public:
        Size(sf::Vector2f size, sf::Vector2f scaleToUnitSize) : 
            m_size(size),
            m_scaleToUnitSize(scaleToUnitSize)
        {
        }

        auto get() { return m_size; }

      private:
        sf::Vector2f m_size;
        sf::Vector2f m_scaleToUnitSize;
    };
}