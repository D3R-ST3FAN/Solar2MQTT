bool PI_Serial::PIXX_QET()
{
  String commandAnswer = this->requestData("QET");
  get.raw.qet = commandAnswer;
  if (commandAnswer == "NAK")
  {
    return true;
  }
    if(commandAnswer == "ERCRC")
  {
    return false;
  }
    liveData["PV_generation_sum"] = commandAnswer;
    return true;
}
