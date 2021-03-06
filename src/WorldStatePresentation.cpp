#include <SDL2/SDL.h>
#include <State/WorldStatePresentation.hpp>

void WorldStatePresentation::HandleInput() {
    SDL_Event event;
    while( SDL_PollEvent( &event ) ) {
        switch( event.type ){
        case SDL_KEYDOWN:
            switch( event.key.keysym.sym ) {

            // case SDLK_LEFT:
            //     if (mWorld.ExistsActiveCajita()) {
            //         Cajita& c{mWorld.GetActiveCajita()};
            //         c.MoveX(-2);
            //     }
            //     break;

            // case SDLK_RIGHT:
            //     if (mWorld.ExistsActiveCajita()) {
            //         Cajita& c{mWorld.GetActiveCajita()};
            //         c.MoveX(2);
            //     }
            //     break;

            // case SDLK_UP:
            //     if (mWorld.ExistsActiveCajita()) {
            //         Cajita& c{mWorld.GetActiveCajita()};
            //         c.MoveY(-2);
            //     }
            //     break;

            // case SDLK_DOWN:
            //     if (mWorld.ExistsActiveCajita()) {
            //         Cajita& c{mWorld.GetActiveCajita()};
            //         c.MoveY(2);
            //     }
            //     break;

            // case SDLK_r:
            //     if (mWorld.ExistsActiveCajita()) {
            //         Cajita& c{mWorld.GetActiveCajita()};
            //         c.Rotate(6);
            //     }
            //     break;

            case SDLK_s:
                mWorld.ChangeState(World::StateEnum::Move);
                break;

            case SDLK_q:
                mWorld.Quit();
                break;

            default:
                break;
            }
            break;
        case SDL_KEYUP:
            break;

        case SDL_QUIT:
            mWorld.Quit();
            break;

        default:
            break;
        }

    }
}



void WorldStatePresentation::Update() {}


void WorldStatePresentation::OnEnter() {}

void WorldStatePresentation::OnExit() {}


