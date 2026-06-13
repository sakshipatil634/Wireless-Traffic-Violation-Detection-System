import cv2
import os
from datetime import datetime

save_folder = "violations"

if not os.path.exists(save_folder):
    os.makedirs(save_folder)

camera = cv2.VideoCapture(0)

while True:
    ret, frame = camera.read()

    cv2.imshow("Traffic Monitoring", frame)

    key = cv2.waitKey(1)

    if key == ord('v'):
        timestamp = datetime.now().strftime("%Y%m%d_%H%M%S")

        filename = f"{save_folder}/violation_{timestamp}.jpg"

        cv2.imwrite(filename, frame)

        print("Violation Captured:", filename)

    elif key == ord('q'):
        break

camera.release()
cv2.destroyAllWindows()