#include "raylib.h"
int main() {
    InitWindow(800, 450, "raylib test");
    float ballX = 400;
    float ballSpeedX = 0.08;
    float ballY = 225;
    float ballSpeedY = 0.08;

    float paddle1X = 1;
    float paddle1Y = 175;
    float paddle2X = 780;
    float paddle2Y = 175;
    int score = 0;
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle(paddle1X,paddle1Y,20,100,RED);
        DrawRectangle(paddle2X,paddle2Y,20,100,RED);
        DrawCircle(ballX,ballY,5.0,RED);
        ballX += ballSpeedX;
        ballY += ballSpeedY;
        if (ballX>799){
            ballSpeedX *= -1;
        }
        else if (ballX<1){
            ballSpeedX *= -1;
        }
        if (ballY>449){
            ballSpeedY *= -1;
        }
        else if (ballY<2){
            ballSpeedY *= -1;
        }
        if (paddle1X<ballX-5 and ballX-5<paddle1X+20 and paddle1Y<ballY and ballY<paddle1Y+100){
            ballSpeedX *= -1;
            score += 1;
        }
        else if (paddle2X<ballX-5 and ballX-5<paddle2X+20 and paddle2Y<ballY and ballY<paddle2Y+100){
            ballSpeedX *= -1;
            score += 1;
        }
if (IsKeyDown(KEY_W)) { paddle1Y -= 0.5; }
if (IsKeyDown(KEY_S)) { paddle1Y += 0.5; }
if (IsKeyDown(KEY_UP)) { paddle2Y -= 0.5; }
if (IsKeyDown(KEY_DOWN)) { paddle2Y += 0.5; }
if (paddle1Y < 0) { paddle1Y = 0; }
if (paddle1Y > 350) { paddle1Y = 350; }
if (paddle2Y < 0) { paddle2Y = 0; }
if (paddle2Y > 350) { paddle2Y = 350; }
        DrawText(TextFormat("ballX: %.1f ballY: %.1f", ballX, ballY), 10, 10, 20, WHITE);
        DrawText(TextFormat("score: %d", score), 80, 45, 20, WHITE);
        EndDrawing();
    }
        CloseWindow();
    return 0;
}
