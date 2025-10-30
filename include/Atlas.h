#include <memory>
#include <raylib.h>

// we use template here so instance gets initialized with rows and cols
// without having to assign them on creation
// this helps with singleton use
// -- also because i wanted to
template <uint8_t rows, uint8_t cols>
class Atlas
{
    static constexpr uint8_t s_SIDE_LENGHT = 64; 
    public:
        enum srcRectangle
        {
            BACKGROUND,
            FRUIT,
            SNAKE_HEAD,
            SNAKE_BODY,
            DEFAULT = BACKGROUND
        };
        
        enum rotation
        {
            UP = 0,
            RIGHT = 1,
            DOWN = 2,
            LEFT = 3,
        };
        static std::unique_ptr<Atlas<rows,cols>>& getInstance();
        Rectangle getSrcRectangle(srcRectangle id);
    private:
        static std::unique_ptr<Atlas> s_instance;
        const char* m_spritePath = "assets/Game.png";
        Texture2D m_baseTexture;
        srcRectangle e_srcRec;
        rotation e_rotation;

        Atlas();
        ~Atlas();
    
};