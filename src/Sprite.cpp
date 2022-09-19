#include "Sprite.h"
#include "SDLppRenderer.h"
#include "SDLppTexture.h"

Sprite::Sprite(const SDLppTexture& texture) : 
	Sprite(texture, texture.GetRect())
{

}

Sprite::Sprite(const SDLppTexture& texture, SDL_Rect& rect) :
	m_texture(texture),
	m_rect(rect)
{

}

void Sprite::Draw(SDLppRenderer& renderer, int x, int y)
{
	SDL_Rect dst;

	dst.x = x;
	dst.y = y;
	dst.w = m_rect.w;
	dst.h = m_rect.h;

	renderer.RenderCopy(m_texture, m_rect, dst);
}