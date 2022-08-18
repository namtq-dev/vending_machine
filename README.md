----------Yêu cầu bài toán----------

A. Máy bán hàng tự động
- Máy bán hàng tự động bày bán miễn phí ba loại mặt hàng. Mỗi loại mặt hàng có số lượng sản phẩm tồn kho tối đa trong từng máy là 10.
- Mỗi máy bán hàng tự động sẽ được gán 1 ID riêng.
- Máy sẽ bán loại hàng hóa mà người dùng lựa chọn. Sau đó, máy bán hàng gửi thông báo về cho hệ thống những thông tin sau:
    Ngày bán hàng
    Loại hàng hóa đã bán
    Số lượng hàng hóa tồn kho
- Hàng hóa được hệ thống vận chuyển đến máy bán hàng tự động. Sau khi được giao tới, hàng hóa sẽ được bổ sung vào máy bán hàng tự động. Mất 5 giây để hoàn tất việc bổ sung. Trong lúc đó, người dùng không thể mua hàng hóa.
- Khi số lượng tồn kho của 1 loại sản phẩm trong máy về 0, máy bán hàng sẽ không thể bán loại hàng hóa đó. Khi đó, máy sẽ hiển thị đã hết hàng.
Máy bán hàng tự động được mô phỏng bằng console. Kết nối của máy bán hàng tự động với hệ thống sử dụng giao tiếp TCP.

B. Hệ thống
- Hệ thống có thể quản lý tối đa ba máy bán hàng tự động được kết nối cùng lúc.
- Hệ thống nhận thông tin bán hàng hóa mà mỗi máy bán hàng truyền về.
- Trong chương trình, sử dụng 1 địa chỉ IP với hệ thống. Và, sử dụng 1 địa chỉ IP với toàn bộ máy bán hàng tự động.
- Hệ thống lưu giữ lịch sử bán hàng trong tệp dựa trên thông tin bán hàng hóa.
    Ngày bán hàng
    Tên máy bán hàng tự động
    Loại sản phẩm
- Hệ thống quản lý số lượng hàng tồn kho trong mỗi máy bán hàng tự động. Hệ thống duy trì thông tin hàng tồn kho dựa trên thông tin bán hàng hóa. Thông tin hệ thống duy trì như sau:
    Tên máy bán hàng tự động
    Loại sản phẩm
    Số lượng hàng hóa tồn kho
- Hệ thống cung cấp hàng hóa để bổ sung trong kho đến máy bán hàng tự động. Trước tiên cần xác nhận thông tin tồn kho của tất cả các mặt hàng. Việc xác nhận số hàng tồn kho được tiến hành mỗi 10s một lần.
- Khi 1 mặt hàng tồn kho từ 3 sản phẩm trở xuống, việc phân phối hàng hóa sẽ diễn ra. Mặt hàng đó được chuyển giao đến máy bán hàng tự động qua tiến trình giao hàng.
Phải mất 5s để chuẩn bị trước khi hàng hóa được giao.
- Việc cung cấp hàng hóa được thể hiện bằng cách truyền dữ liệu trong chương trình.

----------Kiến thức áp dụng----------
- Hệ thống mạng máy tính
- Socket API
- Giao thức TCP
- fork() server - multi thread - pipe 
