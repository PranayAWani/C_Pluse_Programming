from pytube import YouTube

# URL of the YouTube video
video_url = 'https://youtu.be/xymSFWNb92E?si=z6Lt8MmmtoCwFrhc'

# Create a YouTube object
yt = YouTube(video_url)

# Get the highest resolution stream available
stream = yt.streams.get_highest_resolution()

# Download the video
stream.download(output_path='path/to/download/directory')

print('Download complete!')
