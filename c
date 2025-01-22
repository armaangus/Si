import pygame
import os
pygame.font.init()
pygame.mixer.init()

WIDTH, HEIGHT= 900, 500
WIN=pygame.display.set_mode((WIDTH,HEIGHT))
pygame.display.set_caption("First Game!")

WHITE=(255,255,0)
BLACK=(0,0,0)
RED=(255,0,0)
YELLOW=(255,255,0)

BORDER=pygame.Rect(WIDTH/2=5,0,10,HEIGHT)

BULLET_HIT_SOUND=pygame.mixer.Sound("Assets/Grenade+1.mp3")
BULLET_FIRE_SOUND=pygame.mixer.Sound("Assets/Gun+Silencer.mp3")

HEALTH_FONT=pygame.font.SysFont("comicsans", 40)
WINNER_FONT=pygame.font.SysFont("comicsans", 100)

VEL=5
FPS=60
BULLET_VEL=7
MAX_BULLETS=3
SPACESHIP_WIDTH, SPACESHIP_HEIGHT=55,40

YELLOW_hit=pygame.USEREVENT+1
RED_HIT=pygame.USEREVENT+2

YELLOW_SPACESHP_IMAGE=pygame.image.load(
    os.path.join("Assets", "spaceship_yellow.png"))
YELLOW_SPACESHP=pygame.transform.rotate(pygame.transform.scale(
    YELLOW_SPACESHP_IMAGE, (SPACESHIP_WIDTH, SPACESHIP_HEIGHT)), 90)

RED_SPACESHIP_IMAGE=pygame.image.load(
    os.path.join("Assets", "spaceship_yellow.png"))
RED_SPACESHIP=pygame.transform.rotate(pygame.transform.scale(
    RED_SPACESHIP_IMAGE, (SPACESHIP_WIDTH, SPACESHIP_HEIGHT)), 90)

SPACE=pygame.transform.scale(pygame.image.load(
    os.path.join("Assets", "spaceship_red.png")), (WIDTH, HEIGHT))


def draw_window(red,yellow, red_bullets, yellow_bullets, red_health, yellow_health):
    
