using namespace std;

#include <iostream>
#include <vector>

int main(){
	int TheNum = 0;

	for(int i = 2; i< 10000000000; i++)
	{
		if(i%2 == 0)
		{

			if(i%3 == 0)
			{
				if(i%4 == 0)
				{
					if(i%5 == 0)
					{
						if(i%6 == 0)
						{
							if(i%7 == 0)
							{
								if(i%8 == 0)
								{
									if(i%9 == 0)
									{
										if(i%11 == 0)
										{
											if(i%12 == 0)
											{
												if(i%13 == 0)
												{
													if(i%14 == 0)
													{
														if(i%15 == 0)
														{
															if(i%16 == 0)
															{
																if(i%17 == 0)
																{
																	if(i%18 == 0)
																	{
																		if(i%19 == 0)
																		{
																			TheNum = i;
																			break;
																		}
																	}
																}
															}

														}
													}
												}
											}

										}
									}

								}
							}
						}
					}
				}
			}
		}
	}	
	
	cout << "The Num is " << TheNum << endl;
	return 0;
}

