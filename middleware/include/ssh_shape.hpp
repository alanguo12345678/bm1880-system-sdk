#if 0
/* 300 * 400 bmnet input size */
const vector<string> ssh_shape {
  "1,3,300,400, 1,1,1,30060 1,4,10,13 1,8,10,13 1,4,19,25 1,8,19,25 1,4,38,50 1,8,38,50"
};
#else
/* 320 * 320 bmnet input size */
const vector<string> ssh_shape {
  "1,3,320,320, 1,1,1,25200 1,4,10,10 1,8,10,10 1,4,20,20 1,8,20,20 1,4,40,40 1,8,40,40"
};
#endif
const vector<string> onet_shape {
  "128,3,48,48, 1,1,1,2048 128,10,1,1 128,4,1,1 128,2,1,1",
  "1,3,48,48, 1,1,1,16 1,10,1,1 1,4,1,1 1,2,1,1",
  "16,3,48,48, 1,1,1,256 16,10,1,1 16,4,1,1 16,2,1,1",
  "2,3,48,48, 1,1,1,32 2,10,1,1 2,4,1,1 2,2,1,1",
  "32,3,48,48, 1,1,1,512 32,10,1,1 32,4,1,1 32,2,1,1",
  "4,3,48,48, 1,1,1,64 4,10,1,1 4,4,1,1 4,2,1,1",
  "64,3,48,48, 1,1,1,1024 64,10,1,1 64,4,1,1 64,2,1,1",
  "8,3,48,48, 1,1,1,128 8,10,1,1 8,4,1,1 8,2,1,1"
};