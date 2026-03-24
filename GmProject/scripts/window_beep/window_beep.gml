/// window_beep()

function window_beep()
{
	if (!is_cpp())
		return 0
	
	return external_call(lib_window_beep, 0)
}
