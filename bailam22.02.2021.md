Tìm hiểu về git branch và viết một bản tóm tắt theo ý hiểu về kiến thức mà các bạn tổng hợp được

1. Khái niệm về git branch:
- Trong quá trình phát triển phần mềm có thể có nhiều người cùng thêm tính năng hoặc sửa lỗi code trong cùng 1 repository, thế nên phải lưu lại từng phiên bản đã được thay đổi.
- Ta dùng git branch có chức năng phân nhánh và ghi lại lịch sử. Branch đã phân nhánh không gây ảnh hưởng đến các branch khác do đó ta có thể thực hiện nhiều thay đổi trên cùng 1 repository.
- Branch đã phân nhánh có thể tập hợp lại thành 1 branch bằng cách hợp lại với các branch khác. Như vậy, các thành viên có branch dùng riêng cho công việc của mình mà không ảnh hưởng đến công việc của các thành viên khác. Sau khi thực hiện xong công việc, các branch được hợp lại thành branch chính.
- Git branch ghi lại lịch sử công việc, giúp tìm ra vị trí thay đổi của code dễ dàng.
2. Branch master:
- Lần đầu commit thì git tạo ra 1 branch có tên là master.
- Những lần commit sau sẽ được thêm vào master tới khi nào ta chuyển branch khác.
3. Làm việc với branch:
- git branch <branch_name> : Tạo branch mới
- git checkout <branch_name> : Thêm commit vào branch vừa mới tạo
Sau khi checkout sang branch mới, lịch sử thực hiện sẽ được ghi lại trong branch mới này.
- git merge : Hợp các branch lại
- git branch -d <branch_name> : Xóa branch
- git pull : Tải dữ liệu từ 1 branch duy nhất từ server và merge các thay đổi từ remote này vào repository ở local.
- git fetch: Tải toàn bộ dữ liệu của các branch nhưng không merge các thay đổi này ở local.