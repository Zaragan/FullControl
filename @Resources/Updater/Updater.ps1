Set-ExecutionPolicy RemoteSigned
Add-Type -A System.IO.Compression.FileSystem
[IO.Compression.ZipFile]::ExtractToDirectory('master.zip', '..\..\..\')