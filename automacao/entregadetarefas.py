import pyautogui as pa
import time 

pa.PAUSE = 5

# trocar de aba
pa.hotkey('alt', 'tab')
teams = pa.locateCenterOnScreen('teams.png')

# achar o teams
pa.click(teams.x, teams.y)


